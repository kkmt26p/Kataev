const
  argument = 10;

var
  x, n, s, i: integer;

var
  m: array [1..argument] of integer;

begin
  Writeln('������� ���������� �����');
  readln(n);
  s := 0;
  writeln('������� ���� �����');
  for i := 1 to n do
  begin
    read(x);
    if x mod 2 = 0 then
    begin
      s := s + 1;
      m[i] := x;
    end;
  end;
  writeln('������(-��) ');
  for i := n downto 1 do
  begin
    if m[i] <> 0 then
      writeln(m[i]);
  end;
  write('����� ������ ', s);
end.