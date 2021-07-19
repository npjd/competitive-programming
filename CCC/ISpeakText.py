txt_diction = {'CU': 'see you', ':-)': "I'm happy", ':-(': "I'm unhappy", ';-)': 'wink', ':-p': 'stick out my tongue', '(~.~)': 'sleepy', 'TA': 'totally awesome', 'CCC': 'Canadian Computing Competition', 'CUZ': 'because', 'TY': 'thank-you', "YW": "you're welcome", 'TTYL': 'talk to you later'}
string = input()

while True:
    if string in txt_diction:
        print(txt_diction[string])
    else:
        print(string)
    
    if string =="TTYL":
        break
    string = input()