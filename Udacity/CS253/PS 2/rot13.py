def rot13(input):
	output = []
	for char in input:
		
		if char.isalpha():
			char = ord(char)
			
			# checks if letter is uppercase
			if char <= 90 and char >= 65:
				char = char + 13
				if char > 90:
					char = char - 26
					char = chr(char)
					output.append(char)
				else:
					char = chr(char)
					output.append(char)
			
			# checks if letter is lowercase
			if char <= 122 and char >= 97:
				char = char + 13
				if char > 122:
					char = char - 26
					char = chr(char)
					output.append(char)
				else:
					char = chr(char)
					output.append(char)
		
		else:
			output.append(char)
			
	print ''.join(output)
	

rot13('Hello, World!')