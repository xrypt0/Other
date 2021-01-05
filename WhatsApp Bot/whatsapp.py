from selenium import webdriver
import time
import os

print("""

                                                                                                                           
        CCCCCCCCCCCCC                                                                       tttt                           
     CCC::::::::::::C                                                                    ttt:::t                           
   CC:::::::::::::::C                                                                    t:::::t                           
  C:::::CCCCCCCC::::C                                                                    t:::::t                           
 C:::::C       CCCCCCrrrrr   rrrrrrrrryyyyyyy           yyyyyyyppppp   ppppppppp   ttttttt:::::ttttttt       ooooooooooo   
C:::::C              r::::rrr:::::::::ry:::::y         y:::::y p::::ppp:::::::::p  t:::::::::::::::::t     oo:::::::::::oo 
C:::::C              r:::::::::::::::::ry:::::y       y:::::y  p:::::::::::::::::p t:::::::::::::::::t    o:::::::::::::::o
C:::::C              rr::::::rrrrr::::::ry:::::y     y:::::y   pp::::::ppppp::::::ptttttt:::::::tttttt    o:::::ooooo:::::o
C:::::C               r:::::r     r:::::r y:::::y   y:::::y     p:::::p     p:::::p      t:::::t          o::::o     o::::o
C:::::C               r:::::r     rrrrrrr  y:::::y y:::::y      p:::::p     p:::::p      t:::::t          o::::o     o::::o
C:::::C               r:::::r               y:::::y:::::y       p:::::p     p:::::p      t:::::t          o::::o     o::::o
 C:::::C       CCCCCC r:::::r                y:::::::::y        p:::::p    p::::::p      t:::::t    tttttto::::o     o::::o
  C:::::CCCCCCCC::::C r:::::r                 y:::::::y         p:::::ppppp:::::::p      t::::::tttt:::::to:::::ooooo:::::o
   CC:::::::::::::::C r:::::r                  y:::::y          p::::::::::::::::p       tt::::::::::::::to:::::::::::::::o
     CCC::::::::::::C r:::::r                 y:::::y           p::::::::::::::pp          tt:::::::::::tt oo:::::::::::oo 
        CCCCCCCCCCCCC rrrrrrr                y:::::y            p::::::pppppppp              ttttttttttt     ooooooooooo   
                                            y:::::y             p:::::p                                                    
                                           y:::::y              p:::::p                                                    
                                          y:::::y              p:::::::p                                                   
                                         y:::::y               p:::::::p                                                   
                                        yyyyyyy                p:::::::p                                                   
                                                               ppppppppp                                                   
                                                                                                                           


	""")


message = input("Please enter your message : ")
location = os.getcwd() 
path = location+'\\geckodriver.exe'
browser = webdriver.Firefox(executable_path = path)
browser.get("https://web.whatsapp.com/")
time.sleep(25)
message = browser.find_element_by_xpath("MESSAGE BLOCK XPATH")
button = browser.find_element_by_xpath("SEND BUTTON XPATH")
i = 5
while i <=10:
	mesaj.send_keys(message)
	time.sleep(0.1)
	button.click()
	time.sleep(0.2)