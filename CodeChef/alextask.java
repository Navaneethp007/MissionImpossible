import java.util.Scanner;
public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int T = sc.nextInt();
		for (int tc = 0; tc < T; tc++) {
			int N = sc.nextInt();
			int[] A = new int[N];
			for (int i = 0; i < A.length; i++) {
				A[i] = sc.nextInt();
			}
			System.out.println(solve(A));
		}
		sc.close();
	}
	static long solve(int[] A) {
		long result = Long.MAX_VALUE;
		for (int i = 0; i < A.length; i++) {
			for (int j = i + 1; j < A.length; j++) {
				result = Math.min(result, lcm(A[i], A[j]));
			}
		}
		return result;
	}
	static long lcm(int a, int b) {
		return (long) a / gcd(a, b) * b;
	}
	static int gcd(int a, int b) {
		return (b == 0) ? a : gcd(b, a % b);
	}
}
