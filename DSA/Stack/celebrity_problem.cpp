stack<int>st;
        
        for(int i = 0;i < n;i++)
        {
            st.push(i);
        }
        
        while(st.size() >= 2)
        {
            int A = st.top();
            st.pop();
            int B = st.top();
            st.pop();
            
            if(M[A][B] == 1)
                st.push(B);
            else
                st.push(A);
        }
        
        int potentialCeleb = st.top();
        st.pop();
        
        for(int i = 0;i < n ;i++)
        {
            if(i != potentialCeleb)
            {
                if(M[i][potentialCeleb] == 0 || M[potentialCeleb][i] == 1)
                    return -1;
            }
        }
        return potentialCeleb;