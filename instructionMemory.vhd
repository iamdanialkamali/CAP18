library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.Numeric_Std.all;
use STD.textio.all;
use ieee.std_logic_textio.all;

entity instructionMemory is
    Port ( address : in  STD_LOGIC_VECTOR (11 downto 0);
           Instruction : out  STD_LOGIC_VECTOR (15 downto 0));
end instructionMemory;

architecture Behavioral of instructionMemory is
	file INSTRUCTIONFILE : text;
	
   type ram_type is array (0 to (1*(2**9))-1) of std_logic_vector(15 downto 0 );
   signal ram : ram_type;
	
	
	procedure GetInstruction(address : in  STD_LOGIC_VECTOR (11 downto 0);
	Instruction : out  STD_LOGIC_VECTOR (15 downto 0)) is
		begin 
		instruction := ram(to_integer(unsigned(address)));
	end GetInstruction;

	
begin

process
    variable LINE     : line;
    variable INPUT : std_logic_vector(15 downto 0);
	  variable LineCounter : INTEGER;
  begin
 
    file_open(INSTRUCTIONFILE, "input.txt",  read_mode);
	 
    while not endfile(INSTRUCTIONFILE) loop
	 
      readline(INSTRUCTIONFILE, LINE);
      read(LINE, INPUT);
      ram(LineCounter) <= INPUT;
		LineCounter := LineCounter+1; 
      wait for 1 ns;
    end loop;
    file_close(INSTRUCTIONFILE);    
    wait;
	end process;
	

	process
variable inst : std_logic_vector(15 downto 0);
	begin
		GetInstruction(address,inst);
			Instruction <= inst; 
		wait for 1 ns;
		
	end process;

	
end Behavioral;

