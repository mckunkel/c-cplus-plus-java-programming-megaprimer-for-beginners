package clients;

import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class ReadWrite {
	public static void main(String[] args) throws IOException {

		File myFile = new File("MK_java.txt");
		myFile.createNewFile();
		FileWriter writeFile = new FileWriter(myFile);
		writeFile.write("This is some blah text");
		writeFile.flush();
		writeFile.close();

		FileReader readFile = new FileReader(myFile);
		char[] a = new char[50];
		readFile.read(a);
		for (char c : a) {
			System.out.print(c);
			readFile.close();
		}

	}

}
