def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True

def count_primes(lower, upper):
    prime_count = 0
    two_digit_prime_count = 0

    for num in range(lower, upper + 1):
        if is_prime(num):
            prime_count += 1
            if 10 <= num <= 99:
                two_digit_prime_count += 1

    return prime_count, two_digit_prime_count

def main():
    lower_limit = int(input("Enter the lower limit: "))
    upper_limit = int(input("Enter the upper limit: "))

    if lower_limit > upper_limit:
        print("Invalid input: Lower limit should be less than or equal to the upper limit.")
        return

    primes, two_digit_primes = count_primes(lower_limit, upper_limit)

    print("\nPrime numbers between", lower_limit, "and", upper_limit, ":")
    for num in range(lower_limit, upper_limit + 1):
        if is_prime(num):
            print(num, end=" ")

    print("\n\nStatistics:")
    print("a. Count of prime numbers:", primes)
    print("b. Count of 2-digit prime numbers:", two_digit_primes)

if __name__ == "__main__":
    main()