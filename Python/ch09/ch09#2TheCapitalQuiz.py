# number of trys given
NUM_STATES = 5

# define main
def main():

    # set dictionary to reference variable
    state_caps = state_cap_dictionary()

    # initialize variables
    correct = 0
    incorrect = 0

    # for each in number of trys
    for count in range(NUM_STATES):

        # select a random state and capital, using .popitem() to assign to 2 variables
        state, capital = state_caps.popitem()

        # print question with state item and prompt user
        print('What is the capital of ', state, '? ', end='')
        response = input()

        # if response is equal to the answer
        if response.lower() == capital.lower():

            # then correct +1
            correct += 1
            print('Correct')
        else:

            # else incorrect -1
            incorrect += 1
            print('Incorrect')

    # Display the results.
    print('Correct responses:', correct)
    print('Incorrect responses:', incorrect)

# definition of dictionary state capitals
def state_cap_dictionary():
    sc = {
    'Alabama': 'Montgomery',
    'Alaska': 'Juneau',
    'Arizona':'Phoenix',
    'Arkansas':'Little Rock',
    'California': 'Sacramento',
    'Colorado':'Denver',
    'Connecticut':'Hartford',
    'Delaware':'Dover',
    'Florida': 'Tallahassee',
    'Georgia': 'Atlanta',
    'Hawaii': 'Honolulu',
    'Idaho': 'Boise',
    'Illinios': 'Springfield',
    'Indiana': 'Indianapolis',
    'Iowa': 'Des Monies',
    'Kansas': 'Topeka',
    'Kentucky': 'Frankfort',
    'Louisiana': 'Baton Rouge',
    'Maine': 'Augusta',
    'Maryland': 'Annapolis',
    'Massachusetts': 'Boston',
    'Michigan': 'Lansing',
    'Minnesota': 'St. Paul',
    'Mississippi': 'Jackson',
    'Missouri': 'Jefferson City',
    'Montana': 'Helena',
    'Nebraska': 'Lincoln',
    'Neveda': 'Carson City',
    'New Hampshire': 'Concord',
    'New Jersey': 'Trenton',
    'New Mexico': 'Santa Fe',
    'New York': 'Albany',
    'North Carolina': 'Raleigh',
    'North Dakota': 'Bismarck',
    'Ohio': 'Columbus',
    'Oklahoma': 'Oklahoma City',
    'Oregon': 'Salem',
    'Pennsylvania': 'Harrisburg',
    'Rhoda Island': 'Providence',
    'South Carolina': 'Columbia',
    'South Dakoda': 'Pierre',
    'Tennessee': 'Nashville',
    'Texas': 'Austin',
    'Utah': 'Salt Lake City',
    'Vermont': 'Montpelier',
    'Virginia': 'Richmond',
    'Washington': 'Olympia',
    'West Virginia': 'Charleston',
    'Wisconsin': 'Madison',
    'Wyoming': 'Cheyenne'  }
    return sc

# execute program
main()