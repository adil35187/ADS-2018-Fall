package lab5;
import java.util.Scanner;
public class Main {

    public static void main(String[] args) {

        node * root = NULL;

        int d[] = {7, 3, 2, 5, 4, 8};

        for(int i = 0; i < 6; ++i){
            root = add(root, d[i]);
        }

        print(root);

        del(root, 7);

        System.out.println();

        print(root);

        return 0;


    }
}
