library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.Numeric_Std.all;

ENTITY ALU IS
PORT(
input1 : IN std_logic_vector(15 downto 0);
input2 : IN std_logic_vector(15 downto 0);
result : OUT std_logic_vector(15 downto 0);
Status : OUT std_logic_vector(15 downto 0);
Aluop : IN std_logic_vector(2 DOWNTO 0)
);
END ALU;



architecture Behavioral of ALU is
--000:add 001:sub 010:mul 011:and 100:shiftLeft 110:result=immidiate  111:result=0
signal temp:integer:=0;
begin
PROCESS 
BEGIN
wait for 3ns;
Case Aluop is 
	when "000" =>
	result<=std_logic_vector(to_signed(to_integer(signed(input1)) + to_integer(signed(input2)), result'length));
	when "001" =>
	result<=std_logic_vector(to_signed(to_integer(signed(input1)) - to_integer(signed(input2)), result'length));
	when "010" => 
	result<=std_logic_vector(to_signed(to_integer(signed(input1)) * to_integer(signed(input2)), result'length));
	when "011" => 
	result <= input1 and input2 ;
	when "100" => 
	temp <= to_integer(unsigned(input1)) * (2**to_integer(unsigned(input2)));
	result<=std_logic_vector(to_signed(temp , result'length));
	
	when "101" => 
	temp<=to_integer(signed(input1)) - to_integer(signed(input2));
	if( temp = 0) then Status <="1000000000000000"; 
	elsif ( temp < 0) then Status <="0100000000000000";
	else Status <="0000000000000000";
	end if;
	
	when "110" => result <= input2 ;
	when "111" => result <= "0000000000000000" ;
	when others => result <= "UUUUUUUUUUUUUUUU";
end case;
END PROCESS;
end Behavioral;