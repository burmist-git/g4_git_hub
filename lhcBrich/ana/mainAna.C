{
  gROOT->LoadMacro("ana.C");
  ana *t = new ana("../lhcBrich.root");
  //ana *t = new ana("../lhcBrich_K_20GeV.root");  //54.64
  //ana *t = new ana("../lhcBrich_Pi_20GeV.root"); //61.25
  //ana *t = new ana("../lhcBrich_K_50GeV.root");  //60.65
  //ana *t = new ana("../lhcBrich_Pi_50GeV.root");   //61.64
  //t->SetPMTpositionResolution(3);
  t->Loop();
}
