#include <stdio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;

public static void TTest(double[] x, double[] y)
{
  double sumX = 0.0;
  double sumY = 0.0;
  for (int i = 0; i < x.Length; ++i)
    sumX += x[i];
  for (int i = 0; i < y.Length; ++i)
    sumY += y[i];
    int n1 = x.Length;
int n2 = y.Length;
double meanX = sumX / n1;
double meanY = sumY / n2;
double sumXminusMeanSquared = 0.0; // Calculate variances
double sumYminusMeanSquared = 0.0;
for (int i = 0; i < n1; ++i)
  sumXminusMeanSquared += (x[i] - meanX) * (x[i] - meanX);
for (int i = 0; i < n2; ++i)
  sumYminusMeanSquared += (y[i] - meanY) * (y[i] - meanY);
double varX = sumXminusMeanSquared / (n1 - 1);
double varY = sumYminusMeanSquared / (n2 - 1);
double top = (meanX - meanY);
double bot = Math.Sqrt((varX / n1) + (varY / n2));
double t = top / bot;
double num = ((varX / n1) + (varY / n2)) *
  ((varX / n1) + (varY / n2));
double denomLeft = ((varX / n1) * (varX / n1)) / (n1 - 1);
double denomRight = ((varY / n2) * (varY / n2)) / (n2 - 1);
double denom = denomLeft + denomRight;
double df = num / denom;
double p = Student(t, df); // Cumulative two-tail density
  Console.WriteLine("mean of x = " + meanX.ToString("F2"));
  Console.WriteLine("mean of y = " + meanY.ToString("F2"));
  Console.WriteLine("t = " + t.ToString("F4"));
  Console.WriteLine("df = " + df.ToString("F3"));
  Console.WriteLine("p-value = " + p.ToString("F5"));
  Explain();
}
