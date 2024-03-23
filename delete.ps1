# Ejecuta el comando y captura la salida
$out = Invoke-Expression -Command "vcpkg list";

$patronRegex = "(boost\-[A-Za-z0-9\-]+:x64-windows(?:-static)?)";
$match = $out | Select-String -Pattern $patronRegex -AllMatches;

[string]$lib;
$match.Matches | ForEach-Object {
    $lib = $_.Value;
    Invoke-Expression -Command "vcpkg remove $lib --recurse";
}