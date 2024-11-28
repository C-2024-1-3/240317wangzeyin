#include"mytemperature.h"
double celsius_to_fah(double cel)
{
    return 9*cel/5+32;
}
double fahrenheit_to_cels(double fah)
{
    return (fah-32)*5/9;
}
void solve();
int main()
{
    solve();
}