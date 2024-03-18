import java.util.Arrays;

public class Solution {

    public static boolean isAnagram(String str1, String str2) {
        if(str1.length()!=str2.length()){
            return false;
        }
        str1=str1.toLowerCase();
        str2=str2.toLowerCase();
       char[] arr=new char[str1.length()];
        char[] arr2=new char[str2.length()];

        for(int i=0;i<str1.length();i++){
            arr[i]=str1.charAt(i);
            arr2[i]=str2.charAt(i);
        }
        Arrays.sort(arr);
        Arrays.sort(arr2);
        for(int i=0;i<arr.length;i++){
            if(arr[i]!=arr2[i]){
                return false;
            }
        }
        return true;
    }

}
