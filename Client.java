import java.io.*;
import java.net.*;

public class Client {

    public static void main(String[] args) throws IOException {

	final int PORT_NUMBER = 9002;
	    
    	final String HOSTNAME = "192.168.188.132";

    //Attempt to connect with Server

    try {
	    
        Socket s = new Socket(HOSTNAME, PORT_NUMBER);

        PrintWriter out = new PrintWriter(s.getOutputStream(),true);
	    
        BufferedReader in = new BufferedReader(new InputStreamReader(s.getInputStream()));


	//Output to server after receive message

        out.println("\n\tHello and Welcome");
        out.flush();
	System.out.println("\nFrom server: " + in.readLine());
	System.out.println("\nTimed Out\n");
        out.close();
	in.close();
        s.close();

    } catch(Exception e) {

        e.printStackTrace();
    }
	    
    }
	
}
