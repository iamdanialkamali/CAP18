library IEEE;
library work;
use IEEE.STD_LOGIC_1164.ALL;
Use ieee.numeric_std ;
use IEEE.Numeric_Std.all;

use work.instructionMemory;

entity Main is
--IF
Signal pc 		      : std_logic_vector(11 downto 0):="000000000000";
Signal Sinstruction  : std_logic_vector(15 downto 0);
--Controller
Signal Sjump         : STD_LOGIC;          
Signal Sbranch       : STD_LOGIC;
Signal SmemRead  	   : STD_LOGIC;
Signal SmemWrite 	   : STD_LOGIC;
Signal SmemToReg 		: STD_LOGIC;
Signal SaluSrc 	  	: STD_LOGIC;
Signal SregIn1  		: STD_LOGIC;
Signal SregIn2  		: STD_LOGIC;
Signal SRegWrite 		: STD_LOGIC;
Signal SisIndirect   : STD_LOGIC;
Signal SIsMove       : STD_LOGIC; 
Signal SAluop 			: STD_LOGIC_VECTOR (2 downto 0);
signal SImdLength    : STD_LOGIC;
signal SAlusrc2       : STD_LOGIC;
--regFile
signal SreadRegister1  :   STD_LOGIC_VECTOR (3 downto 0);
signal SreadRegister2  :   STD_LOGIC_VECTOR (3 downto 0);
signal SwriteRegister  :   STD_LOGIC_VECTOR (3 downto 0);
Signal SReadData1 	  :   STD_LOGIC_VECTOR (15 downto 0);
Signal SReadData2 	  :   STD_LOGIC_VECTOR (15 downto 0);			  
Signal SWriteData 	  :   STD_LOGIC_VECTOR (15 downto 0);			
Signal Sclock  		  :   STD_LOGIC:='0';		
Signal Sstatus		 	  :   STD_LOGIC_VECTOR (15 downto 0);	

--ALU
Signal SAluResult :   STD_LOGIC_VECTOR (15 downto 0);
Signal AluInput1  :   STD_LOGIC_VECTOR (15 downto 0);
Signal AluInput2  :   STD_LOGIC_VECTOR (15 downto 0);

--Data Mem
Signal SMreadData :   STD_LOGIC_VECTOR (15 downto 0);

end Main;
architecture testmain of Main is
begin

IM: entity work.instructionMemory port map (address =>pc,Instruction => Sinstruction);

CN: entity work.controller Port map (		
		  opCode => Sinstruction (15 DOWNTO 12),
		  AluOp =>SAluop,
		  jump =>Sjump,
		  branch =>Sbranch, 
		  memRead =>SmemRead, 
		  memWrite =>SmemWrite, 
		  memToReg =>SmemToReg,
		  aluSrc  => SaluSrc ,
		  regIn1 => SregIn1 ,
		  regIn2 => SregIn2 ,
		  isIndirect =>SisIndirect,
		  RegWrite => SRegWrite,
		  IsMove  =>SIsMove,
		  ImdLength =>SImdLength,
		  Alusrc2 =>SAlusrc2
		  );
		  
			  

			  			  
RF: entity work.regFile Port map (		
		  writeRegister => SwriteRegister,
		  readRegister1 => SreadRegister1,
		  readRegister2 => SreadRegister2,
		  readData1     => sreadData1,
		  readData2     => sreadData2,
		  regWrite      => sregWrite,
		  clock         => sclock,
		  writeData     => swriteData);
				  
				  
ALU : entity work.alu Port map(
		input1 =>AluInput1,
		input2 =>AluInput2,
		result => SAluResult,
		aluop =>SAluop,
		Status => Sstatus
);



DM:	entity work.datamemory Port map(
		address =>SAluResult,
		writeData =>SReadData1,
		readData =>SMReadData,	
		memWrite =>SmemWrite,
		memRead =>SmemRead,
		isIndirect =>SisIndirect
		
		);

process(Sclock)
begin
if rising_edge(Sclock) then
--jump
if Sjump='1' then
pc <= sinstruction(11 downto 0);
elsif Sbranch='1' and Sstatus(15)='1' then
pc <= std_logic_vector(to_unsigned(to_integer(unsigned(pc))
 + 1 + to_integer(signed(sinstruction(11 downto 0))), 12));
else 
pc <=  std_logic_vector(to_unsigned(to_integer(unsigned(pc)) +1, 12));

end if;
end if;
end process;

process 
begin
wait for 50 ns;
Sclock <= not Sclock;
end process;

process 
begin
if SaluSrc='0' then
Aluinput2<=SreadData2;
elsif SaluSrc='1' then
--sign Extend
if SImdLength='0' then
Aluinput2<=
Sinstruction(5)&Sinstruction(5)&Sinstruction(5)&Sinstruction(5)&Sinstruction(5)&
Sinstruction(5)&Sinstruction(5)&Sinstruction(5)&Sinstruction(5)&Sinstruction(5)&
Sinstruction(5 downto 0);
elsif SImdLength='1' then
Aluinput2<=
Sinstruction(8)&Sinstruction(8)&Sinstruction(8)&Sinstruction(8)&
Sinstruction(8)&Sinstruction(8)&Sinstruction(8)&
Sinstruction(8 downto 0);
end if; 
end if;
if(SAlusrc2 ='0') then 
aluinput1 <= SReadData1;
elsif(Salusrc2 = '1') then 
aluinput1 <= SReadData2;
end if;
wait for 1 ns;
end process;

process 
begin
wait for 1 ns;
--SwriteRegister
if SIsMove='0' then
--rd
SwriteRegister <= '0' & Sinstruction(11 DOWNTO 9);
else
--BA
SwriteRegister <='1'&'0'&'1'&'0'; 
end if;
--SreadRegister1
if  SregIn1='0' then
--rs
SreadRegister1 <= '0' & Sinstruction(8 DOWNTO 6);
else
--rd
SreadRegister1 <='0' & Sinstruction(11 DOWNTO 9);
end if;
--SreadRegister2
if  SregIn2='0' then
--rt
SreadRegister2 <= '0' & Sinstruction(5 DOWNTO 3);
else
--BA
SreadRegister2 <='1'&'0'&'1'&'0';
end if;
end process;

--write back
process
begin
if(Sinstruction (15 DOWNTO 12) = "0001") then 
SwriteData<= std_logic_vector(to_unsigned(to_integer(signed(SMReadData)) + to_integer(signed(Sreaddata1)),16)) ;
elsif SmemToReg='1' then
SwriteData<=SMReadData;
elsif SmemToReg='0' then
SwriteData<=SAluResult;
end if;

wait for 1 ns;
end process;

end testmain;
