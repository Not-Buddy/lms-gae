class Solution:

    def find_first_prime_after_n(self, n: int) -> int:

        num = n + 1

        while True:

            if num % 7 == 0:
                num += 1
                continue

            is_prime = True

            for i in range(2, int(num ** 0.5) + 1):
                if num % i == 0:
                    is_prime = False
                    break

            if is_prime and num > 1:
                return num

            num += 1