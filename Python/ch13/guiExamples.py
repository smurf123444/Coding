# This program displays two labels with text.

import tkinter
import tkinter.messagebox
class MyGUI:
    def __init__(self):

        # Create the main window widget.
        self.main_window = tkinter.Tk()

        # Create two Label widget.
        self.label1 = tkinter.Label(self.main_window, \
                                    text = 'Hello World')
        self.label2 = tkinter.Label(self.main_window, \
                            text ='This is my GUI program.')
        self.my_button = tkinter.Button(self.main_window, \
                                        text = 'Click Me!', \
                                        command = self.do_something)

        # Call both Label widgets' pack method.
        self.label1.pack()
        self.label2.pack()
        self.my_button.pack()

        # Enter the tkinter main loop.
        tkinter.mainloop()
    def do_something(self):
            tkinter.messagebox.showinfo('Response', \
                                        'Thanks for clicking the button.')
# Create an instance of MyGUI class
my_gui = MyGUI()