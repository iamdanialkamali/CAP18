library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.Numeric_Std.all;

LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;
entity dataMemory is
    Port ( address : in  STD_LOGIC_VECTOR (15 downto 0);
           writeData : in  STD_LOGIC_VECTOR (15 downto 0);
           readData : out  STD_LOGIC_VECTOR (15 downto 0);
           memWrite : in  STD_LOGIC;
           memRead : in  STD_LOGIC;
			  isIndirect : in  STD_LOGIC);
end dataMemory;

architecture Behavioral of dataMemory is

   type mem_type is array (0 to (3*(2**9))-1) of std_logic_vector(15 downto 0 );
   signal mem: mem_type;
	signal tmpAddr:STD_LOGIC_VECTOR(15 downto 0);
	signal temp : INTEger;
	
begin

process
  begin
  wait for 10 ns;
  if  address(0)='0' or address(0)='1'  then
		if memWrite = '1' and isIndirect='0' then
			temp <=to_integer(unsigned(address));
			mem(temp) <= writeData;
		 
      elsif (memRead = '1') and isIndirect='0' then
				temp <=to_integer(unsigned(address));
				readData <= mem(temp);
		end if;
		
		if memWrite = '1' and isIndirect='1' then
			tmpAddr <= mem(to_integer(unsigned(address)));
        mem(to_integer(unsigned(tmpAddr))) <= writeData;
		  
      elsif (memRead = '1') and isIndirect='1' then
				tmpAddr <= mem(to_integer(unsigned(address)));
				readData <= mem(to_integer(unsigned(tmpAddr)));
				
		end if;
	end if;	
  end process;


end Behavioral;