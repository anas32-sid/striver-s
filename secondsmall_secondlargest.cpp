int second_largest(int n, vector<int> arr){
        int largest=arr[0];
        int second_largest=-1;
        for(int i=1; i<n; i++){
            if(arr[i]>largest){
                second_largest=largest;
                largest=arr[i];
            }
            else if(arr[i]<largest && arr[i]>second_largest){
                second_largest=arr[i];
            } 
        }
        return second_largest;
    };

int secondsmallest(int n, vector<int> arr){
       int small=arr[0];
       int secondsmall=INT_MAX;
       for(int i=0; i<n; i++){
           if(arr[i]<small){
               secondsmall=small;
               small=arr[i];
           }
           else if(arr[i]>small && arr[i]<secondsmall){
               secondsmall=arr[i];
           }
       }
       return secondsmall;
    };

vector<int> getSecondOrderElements(int n, vector<int> arr) {
int slargest= second_largest(n, arr);
int ssmallest= secondsmallest(n, arr);

return {slargest, ssmallest};
}