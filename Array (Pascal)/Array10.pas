const
  argument = 10;

var
  x, n, s, i: integer;
  m, h: array [1..argument] of integer;

begin
  Writeln('������� ���������� �����');
  readln(n);
  s := 0;
  writeln('������� ���� �����');
  for i := 1 to n do
  begin
    read(x);
    if x mod 2 = 0 then
      m[i] := x
    else
      h[i] := x;
  end;
  writeln('������ ');
  for i := 1 to n do
    if m[i] <> 0 then
      writeln(m[i]);
  writeln('�������� ');
  for i := n downto 1 do
    if h[i] <> 0 then
      writeln(h[i]);
end.