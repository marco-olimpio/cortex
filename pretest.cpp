#include <iostream>

int main() {

  int MAXLOOP = 22, INITIALVALUE = 3;
  int sum = 0;

  for(int i = INITIALVALUE ; i <= MAXLOOP  ; i++){

    if( (i%2 == 0 && i%3 == 0))
      sum *= 2;
    else if(i%2==0)
      sum+=3;
    else if(i%3==0)
      sum-=5;
    else
      sum+=i;
  }

  std::cout<<sum<<std::endl;

	return 0;
}
