########################
1.creation of new file
2.write in file(using writer)
3.write in file(using filewriter)
4.read file






####################################
import java.io.*; 
public class fileOperation {

	public static void main(String[] args) {

		 try {  
              //////////////////////////////////////////////////
	            File file = new File("textfile.txt");  
	            if (file.createNewFile()) {  
	                System.out.println("New File is created!");  
	            } else {  
	                System.out.println("File already exists.");  
	            }  
	            /////////////////////////////////////////////////////////////////
	            
	            Writer w = new FileWriter("textfile.txt");  
	            String content = "I love my country,whfhjgjf,asjghfjagjsgdjff,wegyugfjhsdfjfh";  
	            w.write(content);  
	            w.close(); 
	            ///////////////////////////////////////////////////////////////
	            
	            FileWriter fw=new FileWriter("textfile.txt");    
	            fw.write("Welcome to javaTpoint.");    
	            fw.close();
	            //////////////////////////////////////////////////////////////////////////////
	            
	            Reader reader = new FileReader("textfile.txt");  
	            int data = reader.read();  
	            while (data != -1) {  
	                System.out.print((char) data);  
	                data = reader.read();  
	                
	            }  
	            reader.close();  
		 
		 } 
		 catch (Exception e) {  
	          System.out.print(e);    
	        }  
	}

}
