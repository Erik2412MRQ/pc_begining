#include <iostream>
using namespace std;

int main() {
   int k,l,m,n, numberOfDragons, dragonNotDamage = 0;
   cin >> k >> l >> m >> n >> numberOfDragons;

   for(int i = 1; i <= numberOfDragons; i ++){
        if (i % k != 0 && i % l != 0 && i % m != 0 && i % n != 0){
            dragonNotDamage  ++;
        }
   } 
   cout << numberOfDragons - dragonNotDamage;
}