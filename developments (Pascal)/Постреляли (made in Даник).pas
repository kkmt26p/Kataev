var
  i, j, metka, c, Lin, Klet, Variant, bax, k: integer;

begin
  randomize;
  Writeln('����� ������ ���� ��������� �������� (1) ��� ������������ (2)');
  Readln(Variant);
  if Variant = 1 then begin
    Writeln('���� ������� �� 5 ����� �� 10 ������');
    Writeln('Q ��������, ��� ���������� ���� ');
    Writeln('O �������� �������');
    Writeln('X ��������, ��� �� ������!');
    Writeln('� ����� ������ ���������?');
    metka := random(1, 50);
    Readln(bax);
    for i := 1 to 5 do 
    begin
      for j := 1 to 10 do 
      begin
        c := c + 1;
        if (c = metka) and (bax = metka) then 
          Write('X')
        else
        if c = metka then begin
          Write('Q');
          k := c;
        end
        else
          Write('O');
      end;
      Writeln;
    end;
    if bax = metka then Writeln('�� ������!')
    else
      Writeln('�� ��������� :( ���� ���� �������� � ', k, ' ������');
  end
  else
    Writeln('������� ������� ���������� �����, � ����� ���-�� ������ � �����');
  Readln(Lin, Klet);
  k := Lin * Klet;
  metka := random(1, k);
  Writeln('���� ������� �� ', Lin, ' ����� � ������� �� ', Klet, ' ������');
  Writeln('Q ��������, ��� ���������� ���� ');
  Writeln('O �������� �������');
  Writeln('X ��������, ��� �� ������!');
  Writeln('� ����� ������ ���������?');
  Readln(bax);
  for i := 1 to Lin do 
  begin
    for j := 1 to Klet do 
    begin
      c := c + 1;
      if (c = metka) and (bax = metka) then 
        Write('X')
      else
      if c = metka then begin
        Write('Q');
        k := c;
      end
      else
        Write('O');
    end;
    Writeln;
  end;
  if bax = metka then Writeln('�� ������!')
  else
    Writeln('�� ��������� :( ���� ���� �������� � ', k, ' ������');
end.