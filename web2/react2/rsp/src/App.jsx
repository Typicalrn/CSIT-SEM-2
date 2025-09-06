import './App.css';
import Navbar from './components/navbar';
import About from './components/About';
import Projects from './components/Skills';
import Contact from './components/Contact';
import Footer from './components/Footer';

function App (){
  return (
  <div className="portfolio">
    <Navbar />
    <About />
    <Projects />
    <Contact />
    <Footer />
  </div>
);
}

export default App;
