import java.io.*;

import java.net.*;

import java.net.Socket.*;


public class Client {

    public static void main(String[] args) throws IOException {

	String Words;

	String NewWords;

    //When Sending to Server
try{
    
	BufferedReader FromUser = new BufferedReader(new 
InputStreamReader(System.in));


        Socket s = new Socket("192.168.188.132", 9002);

        DataOutputStream ToServer = new
	DataOutputStream(s.getOutputStream());
 

	 BufferedReader FromServer = new BufferedReader(new 
InputStreamReader(s.getInputStream()));
	
 
	Words = FromUser.readLine();
	ToServer.writeBytes(Words);

	NewWords = FromServer.readLine();
	
	//Output for server after receive message
        
	System.out.println("\nFrom server: " + NewWords);

	System.out.println("\nTimed Out\n");
	
       //out.close();

	//in.close();

        s.close();


    } catch(Exception e) {

        e.printStackTrace();

    }

    }


}
