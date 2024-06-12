#include <Arduino.h>

const int led = 13;
const int buz = 8;

int len = 0;
int unit_delay = 50;

void dot()
{
  Serial.print(".");
  digitalWrite(led, HIGH);
  digitalWrite(buz, HIGH);
  delay(unit_delay);
  digitalWrite(led, LOW);
  digitalWrite(buz, LOW);
  delay(unit_delay);
}

void dash()
{
  Serial.print("-");
  digitalWrite(led, HIGH);
  digitalWrite(buz, HIGH);
  delay(unit_delay * 4);
  digitalWrite(led, LOW);
  digitalWrite(buz, LOW);
  delay(unit_delay);
}

void A()
{
  dot();
  delay(unit_delay);
  dash();
  delay(unit_delay);
}
void B()
{
  dash();
  delay(unit_delay);
  dot();
  delay(unit_delay);
  dot();
  delay(unit_delay);
  dot();
  delay(unit_delay);
}
void C()
{
  dash();
  delay(unit_delay);
  dot();
  delay(unit_delay);
  dash();
  delay(unit_delay);
  dot();
  delay(unit_delay);
}
void D()
{
  dash();
  delay(unit_delay);
  dot();
  delay(unit_delay);
  dot();
  delay(unit_delay);
}
void E()
{
  dot();
  delay(unit_delay);
}
void f()
{
  dot();
  delay(unit_delay);
  dot();
  delay(unit_delay);
  dash();
  delay(unit_delay);
  dot();
  delay(unit_delay);
}
void G()
{
  dash();
  delay(unit_delay);
  dash();
  delay(unit_delay);
  dot();
  delay(unit_delay);
}
void H()
{
  dot();
  delay(unit_delay);
  dot();
  delay(unit_delay);
  dot();
  delay(unit_delay);
  dot();
  delay(unit_delay);
}
void I()
{
  dot();
  delay(unit_delay);
  dot();
  delay(unit_delay);
}
void J()
{
  dot();
  delay(unit_delay);
  dash();
  delay(unit_delay);
  dash();
  delay(unit_delay);
  dash();
  delay(unit_delay);
}
void K()
{
  dash();
  delay(unit_delay);
  dot();
  delay(unit_delay);
  dash();
  delay(unit_delay);
}
void L()
{
  dot();
  delay(unit_delay);
  dash();
  delay(unit_delay);
  dot();
  delay(unit_delay);
  dot();
  delay(unit_delay);
}
void M()
{
  dash();
  delay(unit_delay);
  dash();
  delay(unit_delay);
}
void N()
{
  dash();
  delay(unit_delay);
  dot();
  delay(unit_delay);
}
void O()
{
  dash();
  delay(unit_delay);
  dash();
  delay(unit_delay);
  dash();
  delay(unit_delay);
}
void P()
{
  dot();
  delay(unit_delay);
  dash();
  delay(unit_delay);
  dash();
  delay(unit_delay);
  dot();
}
void Q()
{
  dash();
  delay(unit_delay);
  dash();
  delay(unit_delay);
  dot();
  delay(unit_delay);
  dash();
  delay(unit_delay);
}
void R()
{
  dot();
  delay(unit_delay);
  dash();
  delay(unit_delay);
  dot();
  delay(unit_delay);
}
void S()
{
  dot();
  delay(unit_delay);
  dot();
  delay(unit_delay);
  dot();
  delay(unit_delay);
}
void T()
{
  dash();
  delay(unit_delay);
}
void U()
{
  dot();
  delay(unit_delay);
  dot();
  delay(unit_delay);
  dash();
  delay(unit_delay);
}
void V()
{
  dot();
  delay(unit_delay);
  dot();
  delay(unit_delay);
  dot();
  delay(unit_delay);
  dash();
  delay(unit_delay);
}
void W()
{
  dot();
  delay(unit_delay);
  dash();
  delay(unit_delay);
  dash();
  delay(unit_delay);
}
void X()
{
  dash();
  delay(unit_delay);
  dot();
  delay(unit_delay);
  dot();
  delay(unit_delay);
  dash();
  delay(unit_delay);
}
void Y()
{
  dash();
  delay(unit_delay);
  dot();
  delay(unit_delay);
  dash();
  delay(unit_delay);
  dash();
  delay(unit_delay);
}
void Z()
{
  dash();
  delay(unit_delay);
  dash();
  delay(unit_delay);
  dot();
  delay(unit_delay);
  dot();
  delay(unit_delay);
}
void one()
{
  dot();
  delay(unit_delay);
  dash();
  delay(unit_delay);
  dash();
  delay(unit_delay);
  dash();
  delay(unit_delay);
  dash();
  delay(unit_delay);
}
void two()
{
  dot();
  delay(unit_delay);
  dot();
  delay(unit_delay);
  dash();
  delay(unit_delay);
  dash();
  delay(unit_delay);
  dash();
  delay(unit_delay);
}
void three()
{
  dot();
  delay(unit_delay);
  dot();
  delay(unit_delay);
  dot();
  delay(unit_delay);
  dash();
  delay(unit_delay);
  dash();
  delay(unit_delay);
}
void four()
{
  dot();
  delay(unit_delay);
  dot();
  delay(unit_delay);
  dot();
  delay(unit_delay);
  dot();
  delay(unit_delay);
  dash();
  delay(unit_delay);
}
void five()
{
  dot();
  delay(unit_delay);
  dot();
  delay(unit_delay);
  dot();
  delay(unit_delay);
  dot();
  delay(unit_delay);
  dot();
  delay(unit_delay);
}
void six()
{
  dash();
  delay(unit_delay);
  dot();
  delay(unit_delay);
  dot();
  delay(unit_delay);
  dot();
  delay(unit_delay);
  dot();
  delay(unit_delay);
}
void seven()
{
  dash();
  delay(unit_delay);
  dash();
  delay(unit_delay);
  dot();
  delay(unit_delay);
  dot();
  delay(unit_delay);
  dot();
  delay(unit_delay);
}
void eight()
{
  dash();
  delay(unit_delay);
  dash();
  delay(unit_delay);
  dash();
  delay(unit_delay);
  dot();
  delay(unit_delay);
  dot();
  delay(unit_delay);
}
void nine()
{
  dash();
  delay(unit_delay);
  dash();
  delay(unit_delay);
  dash();
  delay(unit_delay);
  dash();
  delay(unit_delay);
  dot();
  delay(unit_delay);
}
void zero()
{
  dash();
  delay(unit_delay);
  dash();
  delay(unit_delay);
  dash();
  delay(unit_delay);
  dash();
  delay(unit_delay);
  dash();
  delay(unit_delay);
}
void morse(char ch)
{
  if (ch == 'A' || ch == 'a')
  {
    A();
  }
  else if (ch == 'B' || ch == 'b')
  {
    B();
  }
  else if (ch == 'C' || ch == 'c')
  {
    C();
  }
  else if (ch == 'D' || ch == 'd')
  {
    D();
  }
  else if (ch == 'E' || ch == 'e')
  {
    E();
  }
  else if (ch == 'f' || ch == 'f')
  {
    f();
  }
  else if (ch == 'G' || ch == 'g')
  {
    G();
  }
  else if (ch == 'H' || ch == 'h')
  {
    H();
  }
  else if (ch == 'I' || ch == 'i')
  {
    I();
  }
  else if (ch == 'J' || ch == 'j')
  {
    J();
  }
  else if (ch == 'K' || ch == 'k')
  {
    K();
  }
  else if (ch == 'L' || ch == 'l')
  {
    L();
  }
  else if (ch == 'M' || ch == 'm')
  {
    M();
  }
  else if (ch == 'N' || ch == 'n')
  {
    N();
  }
  else if (ch == 'O' || ch == 'o')
  {
    O();
  }
  else if (ch == 'P' || ch == 'p')
  {
    P();
  }
  else if (ch == 'Q' || ch == 'q')
  {
    Q();
  }
  else if (ch == 'R' || ch == 'r')
  {
    R();
  }
  else if (ch == 'S' || ch == 's')
  {
    S();
  }
  else if (ch == 'T' || ch == 't')
  {
    T();
  }
  else if (ch == 'U' || ch == 'u')
  {
    U();
  }
  else if (ch == 'V' || ch == 'v')
  {
    V();
  }
  else if (ch == 'W' || ch == 'w')
  {
    W();
  }
  else if (ch == 'X' || ch == 'x')
  {
    X();
  }
  else if (ch == 'Y' || ch == 'y')
  {
    Y();
  }
  else if (ch == 'Z' || ch == 'z')
  {
    Z();
  }
  else if (ch == '0')
  {
    zero();
  }
  else if (ch == '1')
  {
    one();
  }
  else if (ch == '2')
  {
    two();
  }
  else if (ch == '3')
  {
    three();
  }
  else if (ch == '4')
  {
    four();
  }
  else if (ch == '5')
  {
    five();
  }
  else if (ch == '6')
  {
    six();
  }
  else if (ch == '7')
  {
    seven();
  }
  else if (ch == '8')
  {
    eight();
  }
  else if (ch == '9')
  {
    nine();
  }
  else if (ch == ' ')
  {
    delay(unit_delay * 7);
    Serial.print("/ ");
  }
  else
  {
    Serial.println("Unknown symbol!");
  }
}

void String2Morse(String code)
{
  int len = code.length();
  for (int i = 0; i < len; i++)
  {
    char ch = code.charAt(i);
    morse(ch);
  }
  digitalWrite(led, HIGH);
  digitalWrite(buz, HIGH);
}

void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(buz, OUTPUT);
  digitalWrite(led, HIGH);
  digitalWrite(buz, HIGH);
  Serial.println("I am ready...");
}

void loop()
{
  while (Serial.available())
  {
    String code = Serial.readString();
    Serial.print(code);
    Serial.print(" = ");
    String2Morse(code);
    Serial.println();
  }
  delay(50);
}