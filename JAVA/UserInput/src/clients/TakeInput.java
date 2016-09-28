package clients;

import java.io.IOException;
import java.io.InputStreamReader;

public class TakeInput {

	public static void main(String[] args) throws IOException {
		getInput();
	}

	private static void getInput() throws IOException {
		InputStreamReader cin = null;

		try {
			cin = new InputStreamReader(System.in);
			System.out.println("Enter characters, 'e' to escape");
			char c;
			do {
				c = (char) cin.read();
				System.out.println(c);
			} while (c != 'e');
		} finally {
			if (cin != null) {
				cin.close();
			}
		}
	}
}
