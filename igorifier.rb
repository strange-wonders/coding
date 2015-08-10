#Igorifier-o-matic

print "Thtring pleathe, mathter:"

user_input =  gets.chomp

s_flag=false

if user_input.include? "s"
	user_input.gsub!(/s/, "th")
	s_flag = true
end
if user_input.include? "S"
	user_input.gsub!(/S/, "Th")
	s_flag = true		
end

if s_flag == true
	puts "Thank you, mathter. Your thtring ith: #{user_input}"
else
	puts "There ith nothing to change, mathter."
end
