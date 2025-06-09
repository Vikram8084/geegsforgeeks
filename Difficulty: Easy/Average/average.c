// User function Template for C

// double posAverage(int numbers[], int size) {

//     // Write your code to find average of positive numbers in numbers array
//     // return the answer
//     double sum=0;
//     int count=0;
//     for(int i=0;i<size;i++){
//         if(numbers[i]>0){
//             sum +=numbers[i];
//             count++;
//         }
//     }
//     return sum/count;
// }

double posAverage(int numbers[], int size) {
    double sum = 0;
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (numbers[i] >= 0) {
            sum += numbers[i];
            count++;
        }
    }
    if (count == 0) {
        return 0.0; // or you could return something else to indicate no positive numbers found
    }
    return sum / count;
}