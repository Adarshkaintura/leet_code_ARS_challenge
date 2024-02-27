//optimum with moore voting algorithm
int majorityElement(int a[], int size)
    {
       int count=1;
       int ele=a[0];
       for(int i=1;i<size;i++){
           if(a[i]==ele){
               count++;
           }else{
               count--;
           }
           if(count==0){
               ele=a[i];
               count=1;
           }
       }
       
    count = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] == ele) {
            count++;
        }
    }

    if (count > size / 2) {
        return ele;
    } 
    return -1;
    }
