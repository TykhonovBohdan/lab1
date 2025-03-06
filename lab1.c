#include <stdio.h>
#include <stdlib.h>

void printHello()
{
  printf("Hello\n");
}

void printInt()
{
  int num = 10;
  printf("%d\n", num);
}

void printFloat()
{
  float num = 3.14;
  printf("%.2f\n", num);
}

void addIntegers()
{
  int a = 5, b = 7;
  printf("%d\n", a + b);
}

void printTabulation()
{
  printf("Hello\tWorld\n");
}

void printFormattedFloat()
{
  float num = 12345.345;
  printf("%8.3f\n", num);
}

void addFloats()
{
  float a = 3.5, b = 2.7;
  printf("%.2f\n", a + b);
}

void convertTemperature()
{
  float celsius;
  printf("Введіть температуру в Цельсіях: ");
  scanf("%f", &celsius);
  float fahrenheit = celsius * 9 / 5 + 32;
  printf("%.2f °C = %.2f °F\n", celsius, fahrenheit);
}

void checkEvenOdd()
{
  int num;
  printf("Введіть число: ");
  scanf("%d", &num);
  if (num % 2)
    printf("Непарне\n");
  else
    printf("Парне\n");
}

void compareNumbers()
{
  int a, b;
  printf("Введіть два числа: ");
  scanf("%d %d", &a, &b);
  if (a > b)
    printf("Більше число: %d\n", a);
  else if (b > a)
    printf("Більше число: %d\n", b);
  else
    printf("Числа рівні\n");
}

int main()
{
  system("chcp 65001");

  int choice;
  do
  {
    printf("\nОберіть операцію:\n");
    printf("1. Вивести 'Hello'\n");
    printf("2. Вивести змінну int\n");
    printf("3. Вивести змінну float\n");
    printf("4. Додати два цілі числа\n");
    printf("5. Вивести табуляцію між словами 'Hello' і 'World'\n");
    printf("6. Вивести float з шириною 8 символів і 3 знаками після коми\n");
    printf("7. Додати два float\n");
    printf("8. Конвертувати температуру з Цельсія в Фаренгейт\n");
    printf("9. Перевірити парність числа\n");
    printf("10. Порівняти два числа\n");
    printf("0. Вийти\n");
    printf("Ваш вибір: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      printHello();
      break;
    case 2:
      printInt();
      break;
    case 3:
      printFloat();
      break;
    case 4:
      addIntegers();
      break;
    case 5:
      printTabulation();
      break;
    case 6:
      printFormattedFloat();
      break;
    case 7:
      addFloats();
      break;
    case 8:
      convertTemperature();
      break;
    case 9:
      checkEvenOdd();
      break;
    case 10:
      compareNumbers();
      break;
    case 0:
      printf("Вихід...\n");
      break;
    default:
      printf("Невірний вибір. Спробуйте ще раз.\n");
    }
  } while (choice != 0);

  return 0;
}
