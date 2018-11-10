package algorithms;


import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        Worker w = new Worker();
        System.out.println(" ");

        while (input.hasNextLine()){
            String line = input.nextLine();
            String [] params = line.split(" ");
            if(params[0].equals("exit")) {
                System.out.println("bye");
                break;
            }else {
                w.Process(params);
            }
        }
    }

}
class  Worker{



    public int[] a;
    public int t;
    public int h;

    public Worker(){
        a = new int[1000000];
        t = 0;
        h = 0;
    }

    public void Process(String[] params){
        switch (params[0]) {
            case "push":
                push(Integer.parseInt(params[1]));
                break;
            case "pop":
                pop();
                break;
            case "front":
                front();
                break;
            case "size":
                size();
                break;
            case "clear":
                clear();
                break;



        }
    }




    private boolean empty(){
        return t == 0;
    }


    private void push(int x){
        a[t] = x;
        t++;
        System.out.println("ok");
    }

    private void pop(){
        int res = a[h];
        h++;
        System.out.println(res);
    }

    private void front() {
        System.out.println(a[h]);
    }


    private void size(){
        System.out.println(t - h);
    }

    private void clear(){
        h = 0;
        t = 0;
        System.out.println("ok");
    }
}
