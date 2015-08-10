#Igorifier-o-matic

print "Thtring pleathe, mathter:"

user_input =  gets.chomp

if user_input.include? "s"
	user_input.gsub!(/s/, "th")
end
if user_input.include? "S"
			user_input.gsub!(/S/, "Th")
end

puts "Thank you, mathter. Your thtring ith: #{user_input}"

