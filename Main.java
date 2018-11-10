//package kz.kbtu;

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

    public Worker(){
        a = new int[10000000];
        t = 0;
    }

    public void Process(String[] params){
        switch (params[0]) {
            case "push":
                push(Integer.parseInt(params[1]));
                break;
            case "pop":
                pop();
                break;
            case "back":
                back();
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
        if(empty()){
            System.out.println("error");
            return;
        }
        int res = a[t-1];
        t--;
        System.out.println(res);
    }

    private void front() {
        if(empty()) {
            System.out.println("error");

            return;
        }
        System.out.println(a[0]);
    }

    private void back(){
        if(empty()){
            System.out.println("error");
            return;
        }
        System.out.println(a[t-1]);
    }

    private void size(){
        System.out.println(t);
    }

    private void clear(){
        t = 0;
        System.out.println("ok");
    }
}
