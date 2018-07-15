library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.Numeric_Std.all;

entity controller is
    Port ( opCode : in  STD_LOGIC_VECTOR (3 downto 0);
			  AluOp : out STD_LOGIC_VECTOR (2 downto 0);--000:add 001:sub 010:mul 011:and 100:shiftLeft 101:cmp 110:result=immidiate  111:result=0
           jump : out  STD_LOGIC; --
           branch : out  STD_LOGIC; --
           memRead : out  STD_LOGIC; --
           memWrite : out  STD_LOGIC; --
           memToReg : out  STD_LOGIC; --1:from memto reg  0:from alu to reg
			  aluSrc : out  STD_LOGIC; --second input of alu is 0:refgfile 1:from sign-extended
			  regIn1 : out  STD_LOGIC ;--first input of regFile is 0:rs 1:rd
			  regIn2 : out  STD_LOGIC ;--second input of regFile is 0:rt 1:BA
			  isIndirect : out  STD_LOGIC; --
           RegWrite : out  STD_LOGIC ;--
			  IsMove : out  STD_LOGIC; --
			  ImdLength: out STD_LOGIC;-- 0:6bit 1:9bit
			  Alusrc2 :out STD_LOGIC--first of alu is 0:readdata1 1:readdata2(BA) 
			  );
end controller;

architecture Behavioral of controller is

begin
p_controll: process(opcode) is
  begin
  
		case opCode is
		when "0000" => --Add d0,d1,d2
			Regwrite	  <='1';
			memWrite	  <='0';
			memRead 	  <='0';
			isIndirect <='0';
			jump	 	  <='0';
			branch	  <='0';
			memToReg   <='0';
			AluOp      <="000";
			aluSrc     <='0';
			regIn1     <='0';
			regIn2     <='0';
			IsMove     <='0';
			Alusrc2    <='0';
			Imdlength  <='0';--dont care
			
		when "0001" => --add2 Add d0,d1, 25 d0 = d1 + memory(BA+100) 
			Regwrite	  <='1';
			memWrite	  <='0';
			memRead 	  <='1';
			isIndirect <='0';
			jump	 	  <='0';
			branch	  <='0';
			memToReg   <='0';--dont care (if before check memtoreg)
			AluOp      <="000";--add
			aluSrc     <='1';--2:immidiate
			Alusrc2    <='1';--1:BA
			IsMove     <='0';
			Imdlength  <='0';--6 bit immidiate
			regIn1     <='0';--dont care
			regIn2     <='1';--BA
		
		
		when "0010" => --Sub d0, d1,d2
			Regwrite	  <='1';
			memWrite	  <='0';
			memRead 	  <='0';
			isIndirect <='0';
			jump	 	  <='0';
			branch     <='0';
			memToReg   <='0';
			AluOp      <="001";
			aluSrc     <='0';
			regIn1     <='0';
			Alusrc2    <='0';
			regIn2     <='0';
			IsMove     <='0';
			Imdlength  <='0';--dont care
		when "0011" => --Addi d0,d1, 50
			Regwrite   <='1';
			memWrite   <='0';
			memRead    <='0';
			isIndirect <='0';
			jump	 	  <='0';
			branch     <='0';
			memToReg   <='0';
			AluOp      <="000";
			aluSrc     <='1';
			regIn1     <='0';
			Alusrc2    <='0';
			regIn2     <='0';
			IsMove     <='0';
			Imdlength  <='0';
		when "0100" => --Mul d0, d1,d2
			Regwrite   <='1';
			memWrite   <='0';
			memRead    <='0';
			isIndirect <='0';
			jump	 	  <='0';
			branch     <='0';
			Alusrc2    <='0';
			memToReg   <='0';
			AluOp      <="010";
			aluSrc     <='0';
			regIn1     <='0';
			regIn2     <='0';
			IsMove     <='0';
			Imdlength  <='0';--dont care
		when "0101" => --And d0,d1,d2
			Regwrite   <='1';
			memWrite	  <='0';
			memRead    <='0';
			isIndirect <='0';
			jump	 	  <='0';
			branch     <='0';
			Alusrc2    <='0';
			memToReg   <='0';
			AluOp      <="011";
			aluSrc     <='0';
			regIn1     <='0';
			regIn2     <='0';
			IsMove     <='0';
			Imdlength  <='0';--dont care
		when "0110" => --Sll d0,10
			Regwrite   <='1';
			memWrite   <='0';
			memRead    <='0';
			isIndirect <='0';
			Alusrc2    <='0';
			jump	 	  <='0';
			branch     <='0';
			memToReg   <='0';
			AluOp      <="100";
			aluSrc     <='1';
			regIn1     <='1';
			regIn2     <='0';--dont care
			IsMove     <='0';
			Imdlength  <='1';
		when "0111" => --Lw d0,7
			Regwrite	  <='1';
			memWrite	  <='0';
			memRead 	  <='1';
			isIndirect <='0';
			jump	 	  <='0';
			branch     <='0';
			Alusrc2    <='1';
			memToReg   <='1';
			AluOp      <="000";
			aluSrc     <='1';
			regIn1     <='1';
			regIn2     <='1';
			IsMove     <='0';
			Imdlength  <='1';
		when "1000" =>--Lwi d0,7 
			Regwrite   <='1';
			memWrite   <='0';
			memRead    <='1';
			isIndirect <='1';
			jump	 	  <='0';
			Alusrc2    <='1';
			branch     <='0';
			memToReg   <='1';
			AluOp      <="000";
			aluSrc     <='1';
			regIn1     <='1';
			regIn2     <='1';
			IsMove     <='0';
			Imdlength  <='1';
		when "1001" => --Sw d0,10
			Regwrite	  <='0';
			memWrite	  <='1';
			memRead 	  <='0';
			isIndirect <='0';
			jump	 	  <='0';
			branch     <='0';
			memToReg   <='1';
			Alusrc2    <='1';
			AluOp      <="000";
			aluSrc     <='1';
			regIn1     <='1';
			regIn2     <='1';
			IsMove     <='0';
			Imdlength  <='1';
		when "1010" => --Swi d0,10
			Regwrite   <='0';
			memWrite   <='1';
			memRead 	  <='0';
			isIndirect <='1';
			jump	 	  <='0';
			branch     <='0';
			memToReg   <='1';
			AluOp      <="000";
			aluSrc     <='1';
			regIn1     <='1';
			Alusrc2    <='1';
			regIn2     <='1';
			IsMove     <='0';
			Imdlength  <='1';
		when "1011" => --CLR d0   --rFormat --rs and rt are neutral
			Regwrite   <='1';
			memWrite   <='0';
			memRead 	  <='0';
			isIndirect <='0';
			jump	 	  <='0';
			branch     <='0';
			Alusrc2    <='0'; --dontcare
			memToReg   <='0';
			AluOp      <="111";
			aluSrc     <='0';--dont care
			regIn1     <='0';--dont care
			regIn2     <='0';--dont care
			IsMove     <='0';
			Imdlength  <='0';--dont care
		when "1100" => --Mov BA,50  --iformat(1)  --regins  are dont care because alu just return the immidate 
			Regwrite   <='1';
			memWrite   <='0';
			memRead 	  <='0';
			isIndirect <='0';
			jump	 	  <='0';
			branch     <='0';
			memToReg   <='0';
			AluOp      <="110";
			IsMove     <='1';
			Imdlength  <='1';			
			Alusrc2    <='0';--dont care
			aluSrc     <='1';--the immidiate
			regIn1     <='0';--dont care
			regIn2     <='0';--dont care
		when "1101" => --CMP d0,d1  --rd register is don’t care here. --subtract and determine z-flag and n-flag 
			Regwrite   <='0';
			memWrite   <='0';
			memRead 	  <='0';
			isIndirect <='0';
			jump	 	  <='0';
			branch     <='0';
			memToReg   <='0';
			AluOp      <="101";
			Alusrc2    <='0';
			aluSrc     <='0';
			regIn1     <='0';
			regIn2     <='0';
			IsMove     <='0';
			Imdlength  <='0';--dont care
		when "1110" => --Bne 25  --jformat  --selector to determine next pc <= branch && zFlag
			Regwrite   <='0';
			memWrite   <='0';
			memRead 	  <='0';--dont care
			isIndirect <='0';--dont care
			jump	 	  <='0';
			Alusrc2    <='0';--dont care
			branch     <='1';
			memToReg   <='0';--dont care
			AluOp      <="110";--dont care
			aluSrc     <='0';--dont care
			regIn1     <='0';--dont care
			regIn2     <='0';--dont care
			IsMove     <='0';
			Imdlength  <='0';--dont care
		when "1111" => --Jmp 2500 
			Regwrite	  <='0';
			memWrite	  <='0';
			memRead 	  <='0';--dont care
			isIndirect <='0';--dont care
			jump	 	  <='1';
			Alusrc2    <='0';--dont care
			branch     <='0';--dont care
			memToReg   <='0';--dont care
			AluOp      <="110";--dont care
			aluSrc     <='0';--dont care
			regIn1     <='0';--dont care
			regIn2     <='0';--dont care
			IsMove     <='0';
			Imdlength  <='0';--dont care
		when others => 
			Regwrite<='0';
			memWrite<='0';
		
		end case;
	end process p_controll;
end Behavioral;