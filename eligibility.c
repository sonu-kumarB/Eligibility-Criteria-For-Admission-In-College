#include <stdio.h>

void main(){
  
  int phy;
  int chem;
  int math;
  int totalSub;
  int totalMP;
  
  printf("Eligibility Of Student For Admission In Engineering Collage\n\n");
  printf("Marks In Math >= 65\n");
  printf("Mark In Chemistry >= 50\n");
  printf("Mark In Physics >= 55\n");
  printf("Total In Three Subjects >= 180\n");
  printf("Total In Math and Physics >= 140\n");
  printf("-----------------------------------------------------------\n");
  printf("Enter Your Mark In Physics:");
  scanf("%d",&phy);
  printf("Enter Your Mark In Chemistry:");
  scanf("%d",&chem);
  printf("Enter Your Mark In Math:");
  scanf("%d",&math);
  
  totalSub = phy + chem + math;
  totalMP = phy + math;
  
  printf("Total Mark In Three Subjects %d\n",totalSub);
  printf("Total Mark In Physics & Math %d\n",totalMP);
  
  if(math >= 65){
    if(phy >= 55){
      if(chem >= 50){
          if(totalSub >= 180 || totalMP >= 140){
            printf("Congratulations You're Eligible For Admission\n");
          }
          else{
            printf("You're Not Eligible For Admission\n");
          }
      }
      else{
        printf("You're Not Eligible For Admission\n");
      }
    }
    else{
      printf("You're Not Eligible For Admission\n");
    }
  }
  else{
    printf("You're Not Eligible For Admission\n");
  }
  
}
