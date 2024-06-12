#include <Arduino.h>

const int led = 13;
const int buzzer = 8;

int delay_interval = 60;

void dot()
{
  Serial.print(".");
  digitalWrite(led, LOW);
  digitalWrite(buzzer, LOW);
  delay(delay_interval);
  digitalWrite(led, HIGH);
  digitalWrite(buzzer, HIGH);
  delay(delay_interval);
}

void dash()
{
  Serial.print("-");
  digitalWrite(led, LOW);
  digitalWrite(buzzer, LOW);
  delay(delay_interval * 4);
  digitalWrite(led, HIGH);
  digitalWrite(buzzer, HIGH);
  delay(delay_interval);
}

void A()
{
  dot();
  dash();
}
void B()
{
  dash();
  dot();
  dot();
  dot();
}
void C()
{
  dash();

  dot();

  dash();

  dot();
}
void D()
{
  dash();

  dot();

  dot();
}
void E()
{
  dot();
}
void f()
{
  dot();
  dot();
  dash();
  dot();
}
void G()
{
  dash();
  dash();
  dot();
}
void H()
{
  dot();
  dot();
  dot();
  dot();
}
void I()
{
  dot();
  dot();
}
void J()
{
  dot();
  dash();
  dash();
  dash();
}
void K()
{
  dash();
  dot();
  dash();
}
void L()
{
  dot();

  dash();

  dot();

  dot();
}
void M()
{
  dash();

  dash();
}
void N()
{
  dash();

  dot();
}
void O()
{
  dash();

  dash();

  dash();
}
void P()
{
  dot();

  dash();

  dash();

  dot();
}
void Q()
{
  dash();

  dash();

  dot();

  dash();
}
void R()
{
  dot();

  dash();

  dot();
}
void S()
{
  dot();

  dot();

  dot();
}
void T()
{
  dash();
}
void U()
{
  dot();

  dot();

  dash();
}
void V()
{
  dot();

  dot();

  dot();

  dash();
}
void W()
{
  dot();

  dash();

  dash();
}
void X()
{
  dash();

  dot();

  dot();

  dash();
}
void Y()
{
  dash();

  dot();

  dash();

  dash();
}
void Z()
{
  dash();

  dash();

  dot();

  dot();
}
void one()
{
  dot();

  dash();

  dash();

  dash();

  dash();
}
void two()
{
  dot();

  dot();

  dash();

  dash();

  dash();
}
void three()
{
  dot();

  dot();

  dot();

  dash();

  dash();
}
void four()
{
  dot();

  dot();

  dot();

  dot();

  dash();
}
void five()
{
  dot();

  dot();

  dot();

  dot();

  dot();
}
void six()
{
  dash();

  dot();

  dot();

  dot();

  dot();
}
void seven()
{
  dash();

  dash();

  dot();

  dot();

  dot();
}
void eight()
{
  dash();

  dash();

  dash();

  dot();

  dot();
}
void nine()
{
  dash();

  dash();

  dash();

  dash();

  dot();
}
void zero()
{
  dash();

  dash();

  dash();

  dash();

  dash();
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
    delay(delay_interval * 4);
    Serial.println("/ ");
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
  digitalWrite(buzzer, HIGH);
}

void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  digitalWrite(led, HIGH);
  digitalWrite(buzzer, HIGH);
  Serial.println("++++");
}

void loop()
{
  while (Serial.available())
  {
    String code = Serial.readString();
    String2Morse(code);
    Serial.println();
  }
  delay(50);
}