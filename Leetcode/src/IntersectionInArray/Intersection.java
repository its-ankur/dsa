//package IntersectionInArray;
//import java.util.*;
//public class Intersection {
//    static void findIntersection(int[] a,int[] b,int n,int m){
//        java.util.HashMap<java.lang.Object, java.lang.Object> q= new java.util.HashMap<java.lang.Object, java.lang.Integer>();
//        for(int i=0;i<n;i++){
//            q.put(a[i], q.getOrDefault(a[i],0)+1);
//        }
//        int flag=0;
//        for(int i=0;i<m;i++){
//            if(q.containsKey(b[i]) && q.get(b[i])>0){
//                System.out.print(b[i]+" ");
//                q.put(b[i],q.get(b[i])-1);
//                flag=1;
//            }
//        }
//        if(flag==0){
//            System.out.println(-1);
//        }else {
//            System.out.println();
//        }
//    }
//    public static void main(String[] args) {
//        Scanner sc=new Scanner(System.in);
//        int n= sc.nextInt();
//        int m= sc.nextInt();
//        int[] a=new int[n];
//        int[] b=new int[m];
//        for(int i=0;i<n;i++){
//            a[i]=sc.nextInt();
//        }
//        for(int i=0;i<m;i++){
//            b[i]= sc.nextInt();
//        }
//        findIntersection(a,b,n,m);
//    }
//}
