import React from 'react';
import { BrowserRouter as Router, Route, Switch } from 'react-router-dom';
import Home from './Home';
import Assistant from './Assistant';
import Customization from './Customization';
import Agents from './Agents';
import Butler from './Butler';

function App() {
  return (
    <Router>
      <Switch>
        <Route exact path="/" component={Home} />
        <Route path="/assistant" component={Assistant} />
        <Route path="/customization" component={Customization} />
        <Route path="/agents" component={Agents} />
        <Route path="/butler" component={Butler} />
      </Switch>
    </Router>
  );
}

export default App;