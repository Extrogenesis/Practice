import React from 'react';
import logo from './logo.svg';
import './App.css';

import Greeting from "./greeting"


class SimpleForm extends React.Component {
  state = {
    firstName: '',

  }

  onFirstNameChange = event => 
    this.setState({
      firstName: event.target.value
    })

  render(){
    return (
      <div>
        <input type='text' name='firstName' onChange={this.onFirstNameChange} />
        <Greeting firstName = 'John'/>
      </div>
    )
  }
}


const App = () => (
  <div>
    <img src={logo} className="App-logo" alt="logo" />
    <SimpleForm />
  </div>
)



export default App;


{/* <img src={logo} className="App-logo" alt="logo" /> */}