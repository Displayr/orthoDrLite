{ pkgs ? import <nixpkgs> {}, displayrUtils }:

pkgs.rPackages.buildRPackage {
  name = "orthoDrLite";
  version = displayrUtils.extractRVersion (builtins.readFile ./DESCRIPTION); 
  src = ./.;
  description = ''Utilize an orthogonality constrained optimization algorithm of
    Wen & Yin (2013) <DOI:10.1007/s10107-012-0584-1> to solve a variety of
    dimension reduction problems in the semiparametric framework, such as
    Ma & Zhu (2012) <DOI:10.1080/01621459.2011.646925>, Ma & Zhu (2013)
    <DOI:10.1214/12-AOS1072>, Sun, Zhu, Wang & Zeng (2019) <arXiv:1704.05046>
    and Zhou, Zhu & Zeng (2021) <arXiv:1802.06156>. It also serves as a general
    purpose optimization solver for problems with orthogonality constraints.
    Parallel computing for approximating the gradient is enabled
    through 'OpenMP'. Forked from orthoDr and removed the dependencies on rgl.'';
  propagatedBuildInputs = with pkgs.rPackages; [ 
    RcppArmadillo
    survival
    pracma
    Rcpp
    MASS
    dr
  ];
}
