#include <stdio.h>
double pi = 3.14;
void my_fnc() {
pi = 3.1416; /* এখানন আমরা pi-এর মান এিিু পমরবতিন িনর মে঱াম */
return; /* ফািংলননর মরিানি িাইপ void ঵ন঱ এই return; না মেন঱ও মিন্তু েন঱ */
}
int main() {
printf("%lf\n", pi); /* এখানন pi-এর মান ঵নব 3.14 */
my_fnc();
printf("%lf\n", pi); /* এখানন pi-এর মান ঵নব 3.1416 িারর্ আমরা প্঴মি my_fnc
ফািংলনন মগনয় বেন঱ মেনয়মছ। */
return 0;
}
