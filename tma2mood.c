
    import java.util.Scanner;
    public class mood {
 
	public static void main(String[] args) {
		int mood;

		System.out.println("Enter your mood from the scale of 1 to 5");
		mood = STDIN_SCANNER.nextInt();
		if(mood == 1) {
			System.out.println("I am feeling down.\n");
		}
		if(mood == 2) {
			System.out.println("Not in the mood for work.\n");
		}
		if(mood == 3) {
			System.out.println("This is a fine day.\n");
		}
		if(mood == 4) {
			System.out.println("I can’t be more excited!\n");
		} 
	    else if(mood == 5) {
	    			
			System.out.println("Hooray! This is my day!\n");
	    }
			
		}
		

	public final static Scanner STDIN_SCANNER = new Scanner(System.in);
}
    
    
    
