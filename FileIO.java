import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.net.SocketImpl;

import javaio.FileWriter;



public class FileIO{
    public static void main(String[] args) {

        try{
        BufferedWriter writer = new BufferedWriter(new FileWriter("TestFile.txt"));
        writer.write("Hello there");}

        catch(Exception e){
            System.out.println("Not running");
        }
        
    }
    
}