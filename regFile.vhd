	library IEEE;
	use IEEE.STD_LOGIC_1164.ALL;
	use IEEE.Numeric_Std.all;
	
	entity regFile is
		 Port ( readRegister1 : in  STD_LOGIC_VECTOR (3 downto 0);
				  readRegister2 : in  STD_LOGIC_VECTOR (3 downto 0);
				  writeRegister : in  STD_LOGIC_VECTOR (3 downto 0);
				  readData1 : out  STD_LOGIC_VECTOR (15 downto 0);
				  readData2 : out  STD_LOGIC_VECTOR (15 downto 0);
				  regWrite : in  STD_LOGIC;
				  clock   : in  STD_LOGIC;
				  writeData : in  STD_LOGIC_VECTOR (15 downto 0));
	end regFile;

	architecture Behavioral of regFile is
	type registers is array(0 to 11) of std_logic_vector(15 downto 0);
	signal regs : registers :=(
	"0000011000000001","0000000000110010",
	"0100011110000000","0000000000000100",
	"0000000000000101","0000000000010000",
	"0000000001000000","0000000000010001",
	"0000000000000001","0000001100000000",
	"0000000000000000","0000000000000100");
	--(others =>(others=>'0'));
	procedure p_findData(
		signal readRegister:in std_logic_vector;
		signal readData:out std_logic_vector;
		signal regs : registers
		)is
	begin
		readData<=regs(to_integer(unsigned(readRegister)));
	end p_findData;
	
	begin
	
	process(clock) is
	begin
		if rising_edge(clock) and regWrite='1' then
			regs(to_integer(unsigned(writeRegister))) <= writeData;
		end if;
	end process;

	p_findData(readRegister1,readData1,regs);
	p_findData(readRegister2,readData2,regs);
	
	end Behavioral;