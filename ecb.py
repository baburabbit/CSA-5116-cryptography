def generate_code(data):
    d1 = data[0]
    d2 = data[1]
    d3 = data[2]
    p1 = d1 ^ d2 ^ d3
    p2 = d1 ^ d2
    code = [d1, d2, d3, p1, p2]
    return code
def detect_error(code):
    c1 = code[3]
    c2 = code[4]
    expected_p1 = code[0] ^ code[1] ^ code[2]
    expected_p2 = code[0] ^ code[1]
    if c1 != expected_p1 and c2 != expected_p2:
        print("Double bit error! Unable to correct.")
    elif c1 != expected_p1:
        print("Error detected in P1.")
        code[3] = expected_p1
        code[4] = code[0] ^ code[1]
    elif c2 != expected_p2:
        print("Error detected in P2.")
        code[4] = expected_p2
        return code
data_bits = []
for i in range(5):
    bit = int(input(f"Enter bit {i + 1} (0 or 1): "))
    data_bits.append(bit)
code = generate_code(data_bits)
print("Generated code:", code)
error_location = int(input("Enter position to simulate error (1-5): "))
code[error_location - 1] = 1 - code[error_location - 1]
corrected_code = detect_error(code)
print("Corrected code:", corrected_code)
