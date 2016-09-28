package clients;

import java.io.File;

public class Dirls {
	public static void main(String[] args) {
		File file = new File("/Users/michaelkunkel/WORK/GIT_HUB");
		String[] content = file.list();
		if (content == null) {
			System.out.println("Empty Directory");
		} else {
			for (int i = 0; i < content.length; i++) {
				String filename = content[i];
				System.out.println(filename);
			}
		}

	}

}
