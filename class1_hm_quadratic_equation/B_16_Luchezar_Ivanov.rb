a = ARGV[0].to_i
b = ARGV[1].to_i
c = ARGV[2].to_i
d = (b*b) - (4*a*c)

if d > 0
	x1 = (-b + Math.sqrt(d)) / (2 * a)	
	x2 = (-b - Math.sqrt(d)) / (2 * a)

	puts 'roots:', x1, x2
elsif d == 0
	x = (-b) / (2 * a)

	puts 'roots:', x
else
	puts 'roots are not real numbers'

end
