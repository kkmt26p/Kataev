var
  i, j: integer;

begin
  Write('    ');
  for i := 2 to 9 do 
  begin
    write(i:2);
    write(' ');
  end;
  for i := 2 to 9 do
  begin
    
    writeln;
        for j := 1 to 9 do
      write(i * j:3);
    
  end;
end.