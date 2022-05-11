// public class array{
//     public static int[] sum(int [] arr,int target){
//         Set<Integer> nums = new HashSet<>();
//         for(int i=0;i<arr.length;i++){            
//                 if(target - arr[i] == target){
//                     int match = target - arr[i];
//                     if(nums.contains(match)){
//                         return new int[]{arr[i],match};
//                     }
//                     else{
//                         nums.add(arr[i]);
//                     }
//                 }            
//         }
//         return new int[0];
//     }    
//     public static void main(String[] args) {
//         int[] arr = {6,5,7,9,4,0,2};
//         int target = 10;
//         int[] result = sum(arr,target);
//         for(int i=0;i<result.length;i++){
//             System.out.println(result[i]);
//         }
//     }
// }